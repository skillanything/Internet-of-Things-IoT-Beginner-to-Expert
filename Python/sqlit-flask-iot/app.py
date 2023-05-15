from flask import Flask, render_template, request
from flask_sqlalchemy import SQLAlchemy
from datetime import datetime
import random

# create Flask application instance
app = Flask(__name__)

# configure SQLite database for application
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///iot.db'

# create SQLAlchemy database instance
db = SQLAlchemy(app)

# define SensorData database model
class SensorData(db.Model):
    # define columns for table
    id = db.Column(db.Integer, primary_key=True)
    timestamp = db.Column(db.DateTime, nullable=False)
    temperature = db.Column(db.Float, nullable=False)
    humidity = db.Column(db.Float, nullable=False)

    def __repr__(self):
        return '<SensorData %r>' % self.id

# create the database and tables
with app.app_context():
    db.create_all()

# define route for homepage
@app.route('/')
def index():
    # query all data from SensorData table
    data = SensorData.query.all()
    # render homepage template with data
    return render_template('index.html', data=data)

# define route for form to add data
@app.route('/add')
def add_form():
    # render add form template
    return render_template('add.html')

# define route to process form data and add to database
@app.route('/add', methods=['POST'])
def add():
    # generate random temperature and humidity values
    temperature=random.randint(10,60)
    humidity=random.randint(50,120)
    # create SensorData instance with current timestamp and random values
    data = SensorData(timestamp=datetime.now(), temperature=temperature, humidity=humidity)
    # add SensorData instance to database session
    db.session.add(data)
    # commit changes to database
    db.session.commit()
    # return success message
    return 'Data added successfully'

# run the application
if __name__ == '__main__':
    app.run(debug=True)

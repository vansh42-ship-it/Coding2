import pandas as pd
import numpy as np

train_data = pd.read_csv("titanic/train.csv")

#Dropping cabin column because it is almost 80% missing
train_data.drop(columns=['Cabin'],inplace = True)

#filling the NA age values with median ages
median_age = train_data['Age'].median()

train_data['Age'].fillna(median_age,inplace = True)
print(train_data.info())

#After doing above steps only 2 NA values were missing which were port they boarded from and hence i will fill it by the most common port that is the Mode of ports
most_common_port = train_data['Embarked'].mode()[0]
train_data['Embarked'].fillna(most_common_port,inplace = True)
print(train_data.info())



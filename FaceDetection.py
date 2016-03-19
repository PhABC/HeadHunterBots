
# coding: utf-8

# # Convolutional Neural Network for Face Recognition

# ### Importing

# In[39]:

import cv2 #Open CV
import cv
import sys
import numpy as np
from PIL import Image


# ### Data

# In[13]:

#imgPath = sys.argv[1]
#cascPath  = sys.argv[2]

mainPath = '/home/phc/Dropbox/Hackathons/HeadHunterBots/'
imgPath  = mainPath + 'viv.jpg'
cascPath = mainPath + 'FaceDetect/haarcascade_frontalface_default.xml'


# ### Face Detection

# In[24]:

#Loading Images and Cascade
img = cv2.imread(imgPath)

#cv2.imshow('image',img)
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# Create the haar cascade
faceCascade = cv2.CascadeClassifier(cascPath)


# In[55]:

# Detecting Faces
faces = faceCascade.detectMultiScale(
    gray,
    scaleFactor=1.1,
    minNeighbors=5,
    minSize=(30, 30),
    flags = cv2.cv.CV_HAAR_SCALE_IMAGE )


print "Found {0} faces!".format(len(faces))


# In[59]:

# Draw a rectangle around the faces
for (x, y, w, h) in faces:
    cv2.rectangle(img, (x, y), (x+w, y+h), (0, 255, 0), 2)

im = Image.fromarray(img)
im.show()


# In[ ]:




import pickle
import numpy as np
import os
import random
from PIL import Image

Mnist = pickle.load(open("mnist.pkl", 'rb'))
mainpath = '/Users/joshuaconcon/Desktop/philip/'

Cphil = np.zeros([605,128*128])
yPhil = np.ones(605)*2
c = 0
for filename in os.listdir(mainpath):
    if filename != ".DS_Store":
        img = Image.open(mainpath + filename)
        img = np.array(img.convert('L'))
        Cphil[c,:] = img.reshape(128*128)
        c += 1

mainpath = '/Users/joshuaconcon/Desktop/josh/'
Cjosh = np.zeros([740,128*128])
yJosh = np.ones(740)
c = 0
for filename in os.listdir(mainpath):
    if filename != ".DS_Store":
        img = Image.open(mainpath + filename)
        img = np.array(img.convert('L'))
        Cjosh[c,:] = img.reshape(128*128)
        c += 1

mainpath = '/Users/joshuaconcon/Desktop/FACES/'
Cfaces = np.zeros([13233,128*128])
yFaces = np.zeros(13233)
c = 0
for filename in os.listdir(mainpath):
    if filename != ".DS_Store":
        img = Image.open(mainpath + filename)
        img = np.array(img.convert('L'))
        Cfaces[c,:] = img.reshape(128*128)
        c += 1

# general shuffle
random.shuffle(Cphil)
random.shuffle(Cfaces)
random.shuffle(Cjosh)

# shuffle phil
index_phil = np.arange(605)
random.shuffle(index_phil)
# divide up phil's distributions
train_phil = Cphil[index_phil[:501]]
cross_phil = Cphil[index_phil[501:556]]
test_phil = Cphil[index_phil[556:]]
y_train_phil = yPhil[index_phil[:501]]
y_cross_phil = yPhil[index_phil[501:556]]
y_test_phil = yPhil[index_phil[556:]]

# shuffle josh
index_josh = np.arange(740)
random.shuffle(index_josh)
# shuffle josh's distrubutions
train_josh = Cjosh[:601]
cross_josh = Cjosh[601:671]
test_josh = Cjosh[671:]
y_train_josh = yJosh[:601]
y_cross_josh = yJosh[601:671]
y_test_josh  = yJosh[671:]

# shuffle faces
index_faces = np.arange(13233)
random.shuffle(index_faces)
# shuffle faces' distrubutions
train_faces = Cfaces[:11001]
cross_faces = Cfaces[11001:12216]
test_faces = Cfaces[12216:]
y_train_faces = yFaces[:11001]
y_cross_faces = yFaces[11001:12216]
y_test_faces = yFaces[12216:]

# shuffle the machine learning tests
training_indexes = np.arange(12103)
cross_indexes = np.arange(1340)
testing_indexes = np.arange(1135)
random.shuffle(training_indexes)
random.shuffle(cross_indexes)
random.shuffle(testing_indexes)

# train
train_image_array = np.vstack((train_josh, train_phil))
train_image_array = np.vstack((train_image_array, train_faces))

train_y_array = np.hstack((y_train_josh, y_train_phil))
train_y_array = np.hstack((train_y_array, y_train_faces))

# cross
cross_image_array = np.vstack((cross_josh, cross_phil))
cross_image_array = np.vstack((cross_image_array, cross_faces))

cross_y_array = np.hstack((y_cross_josh, y_cross_phil))
cross_y_array = np.hstack((cross_y_array, y_cross_faces))

# test
test_image_array = np.vstack((test_josh, test_phil))
test_image_array = np.vstack((test_image_array, test_faces))

test_y_array = np.hstack((y_test_josh, y_test_phil))
test_y_array = np.hstack((test_y_array, y_test_faces))

data = [[train_image_array[training_indexes],train_y_array[training_indexes]],
        [cross_image_array[cross_indexes],cross_y_array[cross_indexes]],
        [test_image_array[testing_indexes],test_y_array[testing_indexes]]]

pickle.dump(data,open('facePrime.pkl', 'wb'))

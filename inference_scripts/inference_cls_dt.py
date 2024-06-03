import os.path as osp
import numpy as np
from sklearn2c import DTClassifier

test_samples = np.load(osp.join("classification_data","cls_test_samples.npy"))
test_labels = np.load(osp.join("classification_data","cls_test_labels.npy"))

dtc = DTClassifier.load(osp.join("classification_models", "dt_classifier.joblib"))
predictions = dtc.predict(test_samples)
print(predictions)
import os.path as osp
from sklearn2c import KNNClassifier

model_path = osp.join("classification_models","KNN_classifier.joblib")
export_path = osp.join("exported_models","classification","KNN_config")
knn = KNNClassifier.load(model_path)
knn.export(export_path)

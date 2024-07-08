import os.path as osp
from data_utils import read_data
from feature_utils import create_features
from sklearn2c import Dbscan

DATA_PATH = osp.join("WISDM_ar_v1.1", "WISDM_ar_v1.1_raw.txt")
TIME_PERIODS = 80
STEP_DISTANCE = 40
data_df = read_data(DATA_PATH)
df_train = data_df[data_df["user"] <= 28]
df_test = data_df[data_df["user"] > 28]

train_segments_df, train_labels = create_features(df_train, TIME_PERIODS, STEP_DISTANCE)
dbscan = Dbscan(eps = 8, min_samples = 5)
dbscan.train(train_segments_df)
dbscan.predict(train_segments_df)
dbscan.export("dbscan_clus_export")
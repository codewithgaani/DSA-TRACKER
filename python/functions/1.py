import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

# Create a Pandas DataFrame
data = {
    "Student": ["Alice", "Bob", "Charlie"],
    "Math": [85, 90, 78],
    "Science": [92, 88, 80]
}
df = pd.DataFrame(data)

# Compute averages using NumPy
math_scores = np.array(df["Math"])
science_scores = np.array(df["Science"])
averages = (math_scores + science_scores) / 2

# Add averages to the DataFrame
df["Average"] = averages

# Plot the data using Matplotlib
x = np.arange(len(df["Student"]))  # X positions for the bar chart
width = 0.4  # Width of the bars

plt.bar(x - width/2, math_scores, width, label="Math", color="blue")
plt.bar(x + width/2, science_scores, width, label="Science", color="green")

plt.xticks(x, df["Student"])
plt.xlabel("Students")
plt.ylabel("Scores")
plt.title("Student Scores")
plt.legend()

plt.show()

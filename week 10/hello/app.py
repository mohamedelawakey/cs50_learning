from flask import Flask, render_template, request
app = Flask(__name__)
@app.route("/", methods=["GET","POST"])
def index():
    # name = request.args.get('name','world')
    # return render_template("index.html", name = name)
    
    if request.method == "POST":
        name = request.form.get('name','world')
        return render_template("greet.html", name = name)
    else:
        return render_template("index.html")

"""

@app.route("/greet", methods=['POST'])
def greet():
    # name = request.args.get('name','world')
    name = request.form.get('name','world')
    return render_template("greet.html", name = name)
    
"""
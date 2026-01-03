import os

extensions = ["breathe"]

html_theme = "sphinx_rtd_theme"

breathe_projects = {
    "LED": "build/doxygen/xml"
}

breathe_default_project = "LED"

#!/bin/bash

set -e

if ! command -v mkdocs &> /dev/null; then
    echo "Error: mkdocs is not installed. Activate your environment or install mkdocs."
    exit 1
fi

echo "Building documentation with mkdocs..."
mkdocs build

echo "Deploying documentation to GitHub Pages..."
mkdocs gh-deploy --force
echo "Deployment complete."

mkdocs gh-deploy --force
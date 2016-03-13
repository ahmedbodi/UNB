from distutils.core import setup
setup(name='voxspendfrom',
      version='1.0',
      description='Command-line utility for voxels "coin control"',
      author='Gavin Andresen',
      author_email='gavin@voxelsfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )

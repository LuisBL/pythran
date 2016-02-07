from distutils.core import setup, Extension
from pythran import PythranExtension

module1 = PythranExtension('demo2.a', sources = ['a.py'])
setup(name = 'demo2',
      version = '1.0',
      description = 'This is another demo package',
      ext_modules = [module1])

// Class: FEAST::IPrsParser


/* FEAST::IPrsParser::IPrsParser() */

void __thiscall FEAST::IPrsParser::IPrsParser(IPrsParser *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_06a36d60;
  return;
}


/* FEAST::IPrsParser::PrsCreate(unsigned long) */

CPrsParser * __thiscall FEAST::IPrsParser::PrsCreate(IPrsParser *this,ulong param_1)

{
  CPrsParser *this_00;
  
  this_00 = CLexLexer::operator_new((CLexLexer *)0x8e450,param_1);
  CPrsParser::CPrsParser(this_00);
  *(IPrsParser **)(this_00 + 0x8e448) = this;
  return this_00;
}


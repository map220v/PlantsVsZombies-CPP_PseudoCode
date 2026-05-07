// Class: Sexy::PopAnimListener


/* Sexy::PopAnimListener::PopAnimCommand(int, Sexy::PASpriteInst*, std::string const&, std::string
   const&) */

undefined8 __thiscall
Sexy::PopAnimListener::PopAnimCommand
          (PopAnimListener *this,int param_1,PASpriteInst *param_2,string *param_3,string *param_4)

{
  (**(code **)(*(long *)this + 0x20))(this,param_1,param_3,param_4);
  return 0;
}


/* Sexy::PopAnimListener::PopAnimPlaySample(std::string const&, int, double, double) */

void Sexy::PopAnimListener::PopAnimPlaySample
               (string *param_1,int param_2,double param_3,double param_4)

{
  return;
}


/* Sexy::PopAnimListener::PopAnimStopped(int) */

int Sexy::PopAnimListener::PopAnimStopped(int param_1)

{
  return param_1;
}


/* Sexy::PopAnimListener::PopAnimListener() */

void __thiscall Sexy::PopAnimListener::PopAnimListener(PopAnimListener *this)

{
  *(undefined ***)this = &PTR_nop_068316d0;
  return;
}


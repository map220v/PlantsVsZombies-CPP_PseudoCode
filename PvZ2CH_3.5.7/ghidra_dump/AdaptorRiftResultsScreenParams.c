// Class: AdaptorRiftResultsScreenParams


/* AdaptorRiftResultsScreenParams::~AdaptorRiftResultsScreenParams() */

void __thiscall
AdaptorRiftResultsScreenParams::~AdaptorRiftResultsScreenParams
          (AdaptorRiftResultsScreenParams *this)

{
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 8));
  return;
}


/* AdaptorRiftResultsScreenParams::AdaptorRiftResultsScreenParams() */

void __thiscall
AdaptorRiftResultsScreenParams::AdaptorRiftResultsScreenParams(AdaptorRiftResultsScreenParams *this)

{
  *this = (AdaptorRiftResultsScreenParams)0x0;
  this[1] = (AdaptorRiftResultsScreenParams)0x0;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 8));
  return;
}


/* AdaptorRiftResultsScreenParams::TEMPNAMEPLACEHOLDERVALUE(AdaptorRiftResultsScreenParams const&)
    */

AdaptorRiftResultsScreenParams * __thiscall
AdaptorRiftResultsScreenParams::operator=
          (AdaptorRiftResultsScreenParams *this,AdaptorRiftResultsScreenParams *param_1)

{
  AdaptorRiftResultsScreenParams AVar1;
  
  AVar1 = *param_1;
  this[1] = param_1[1];
  *this = AVar1;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 8),
             (RtReflectionDelegate *)(param_1 + 8));
  return this;
}


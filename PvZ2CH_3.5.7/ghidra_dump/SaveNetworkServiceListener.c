// Class: SaveNetworkServiceListener


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveNetworkServiceListener::ServiceRequestFailed(Sexy::StructuredData const*, void const*) */

void __thiscall
SaveNetworkServiceListener::ServiceRequestFailed
          (SaveNetworkServiceListener *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PvZ2NetworkServiceListener::isMyRequest((PvZ2NetworkServiceListener *)this,param_2);
  if (cVar1 != '\0') {
    pcVar2 = *(code **)(*(long *)this + 0x48);
    std::string::string(asStack_10,"save");
    (*pcVar2)(this,asStack_10,param_1);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SaveNetworkServiceListener::ServiceRequestCompleted(Sexy::StructuredData const*, void const*) */

void __thiscall
SaveNetworkServiceListener::ServiceRequestCompleted
          (SaveNetworkServiceListener *this,StructuredData *param_1,void *param_2)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PvZ2NetworkServiceListener::isMyRequest((PvZ2NetworkServiceListener *)this,param_2);
  if (cVar1 != '\0') {
    lVar2 = Sexy::StructuredData::IntegerForPath(param_1,"$.statusCode",-1);
    if (lVar2 == -1) {
      ListenerHelpers::setThrottlesFromResponse(param_1,*(Throttles **)(this + 0x18));
      pcVar3 = *(code **)(*(long *)this + 0x50);
      std::string::string(asStack_10,"save");
      (*pcVar3)(this,asStack_10,param_1);
      std::string::~string(asStack_10);
      nop();
      (**(code **)(**(long **)(this + 0x10) + 0x50))(*(long **)(this + 0x10));
    }
    else {
      (**(code **)(*(long *)this + 0x38))(this,param_1,param_2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SaveNetworkServiceListener::SaveNetworkServiceListener(PlayerInfoDeltaHandler&) */

void __thiscall
SaveNetworkServiceListener::SaveNetworkServiceListener
          (SaveNetworkServiceListener *this,PlayerInfoDeltaHandler *param_1)

{
  undefined8 uVar1;
  
  PvZ2NetworkServiceListener::PvZ2NetworkServiceListener((PvZ2NetworkServiceListener *)this);
  *(PlayerInfoDeltaHandler **)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR_ToString_067935d0;
  uVar1 = Throttles::GetInstance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


/* SaveNetworkServiceListener::SaveNetworkServiceListener(PlayerInfoDeltaHandler&, Throttles&) */

void __thiscall
SaveNetworkServiceListener::SaveNetworkServiceListener
          (SaveNetworkServiceListener *this,PlayerInfoDeltaHandler *param_1,Throttles *param_2)

{
  PvZ2NetworkServiceListener::PvZ2NetworkServiceListener((PvZ2NetworkServiceListener *)this);
  *(PlayerInfoDeltaHandler **)(this + 0x10) = param_1;
  *(Throttles **)(this + 0x18) = param_2;
  *(undefined ***)this = &PTR_ToString_067935d0;
  return;
}


// Class: AdaptorJoustResultsScreenParams


/* AdaptorJoustResultsScreenParams::AdaptorJoustResultsScreenParams() */

void __thiscall
AdaptorJoustResultsScreenParams::AdaptorJoustResultsScreenParams
          (AdaptorJoustResultsScreenParams *this)

{
  *this = (AdaptorJoustResultsScreenParams)0x0;
  *(undefined4 *)(this + 4) = 0;
  RtReflectionDelegate<Sexy::Delegate0>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate0> *)(this + 8));
  FUN_05476574(this + 0x50);
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  FUN_05476574(this + 0x78);
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x88));
  return;
}


/* AdaptorJoustResultsScreenParams::~AdaptorJoustResultsScreenParams() */

void __thiscall
AdaptorJoustResultsScreenParams::~AdaptorJoustResultsScreenParams
          (AdaptorJoustResultsScreenParams *this)

{
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::~vector
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)(this + 0x88));
  FUN_05476c50(this + 0x78);
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::~vector
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)(this + 0x60));
  FUN_05476c50(this + 0x50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)(this + 8));
  return;
}


/* AdaptorJoustResultsScreenParams::TEMPNAMEPLACEHOLDERVALUE(AdaptorJoustResultsScreenParams const&)
    */

AdaptorJoustResultsScreenParams * __thiscall
AdaptorJoustResultsScreenParams::operator=
          (AdaptorJoustResultsScreenParams *this,AdaptorJoustResultsScreenParams *param_1)

{
  undefined4 uVar1;
  AdaptorJoustResultsScreenParams AVar2;
  
  AVar2 = *param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *this = AVar2;
  RtReflectionDelegate<Sexy::Delegate1<RealObject*>>::operator=
            ((RtReflectionDelegate<Sexy::Delegate1<RealObject*>> *)(this + 8),
             (RtReflectionDelegate *)(param_1 + 8));
  thunk_FUN_05477b9c(this + 0x50,param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = uVar1;
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::operator=
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)(this + 0x60),
             (vector *)(param_1 + 0x60));
  thunk_FUN_05477b9c(this + 0x78,param_1 + 0x78);
  uVar1 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x80) = uVar1;
  std::vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>>::operator=
            ((vector<HotUISeedPacketConfig,std::allocator<HotUISeedPacketConfig>> *)(this + 0x88),
             (vector *)(param_1 + 0x88));
  return this;
}


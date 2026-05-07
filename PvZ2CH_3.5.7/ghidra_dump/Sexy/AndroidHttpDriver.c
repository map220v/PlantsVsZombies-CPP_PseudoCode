// Class: Sexy::AndroidHttpDriver


/* Sexy::AndroidHttpDriver::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::AndroidHttpDriver::BindJavaMethods
          (AndroidHttpDriver *this,_JNIEnv *param_1,JavaClass *param_2)

{
  JavaMethodBase::init
            ((JavaMethodBase *)JavaGetNetworkStatus,param_1,param_2,"GetNetworkStatus","()I");
  return;
}


/* non-virtual thunk to Sexy::AndroidHttpDriver::BindJavaMethods(_JNIEnv*, JavaClass const&) */

void __thiscall
Sexy::AndroidHttpDriver::BindJavaMethods
          (AndroidHttpDriver *this,_JNIEnv *param_1,JavaClass *param_2)

{
  BindJavaMethods(this + -8,param_1,param_2);
  return;
}


/* Sexy::AndroidHttpDriver::CreateHttpTransaction(std::string const&, std::string const&, unsigned
   int) */

AndroidHttpTransaction * __thiscall
Sexy::AndroidHttpDriver::CreateHttpTransaction
          (AndroidHttpDriver *this,string *param_1,string *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  AndroidHttpTransaction *this_00;
  
  uVar1 = FUN_0547429c(param_1);
  uVar2 = FUN_0547429c(param_2);
  __android_log_print(4,"AndroidHttpDriver","CreateHttpTransaction( \"%s\", \"%s\" )",uVar1,uVar2);
  this_00 = ::operator_new(0x30);
  AndroidHttpTransaction::AndroidHttpTransaction(this_00,param_1,param_2,param_3);
  return this_00;
}


/* Sexy::AndroidHttpDriver::GetNetworkStatus() */

void __thiscall Sexy::AndroidHttpDriver::GetNetworkStatus(AndroidHttpDriver *this)

{
  undefined4 uVar1;
  _JNIEnv *p_Var2;
  
  p_Var2 = (_JNIEnv *)Android::Util::GetJNIEnv();
  uVar1 = JavaMethod<int>::operator()
                    ((JavaMethod<int> *)JavaGetNetworkStatus,p_Var2,*(_jobject **)(this + 0x10));
  *(undefined4 *)(this + 0x48) = uVar1;
  return;
}


/* Sexy::AndroidHttpDriver::~AndroidHttpDriver() */

void __thiscall Sexy::AndroidHttpDriver::~AndroidHttpDriver(AndroidHttpDriver *this)

{
  *(undefined ***)this = &PTR__AndroidHttpDriver_06a34c40;
  *(undefined ***)(this + 8) = &PTR__AndroidHttpDriver_06a34c90;
  std::vector<Sexy::AndroidHttpTransaction*,std::allocator<Sexy::AndroidHttpTransaction*>>::~vector
            ((vector<Sexy::AndroidHttpTransaction*,std::allocator<Sexy::AndroidHttpTransaction*>> *)
             (this + 0x50));
  std::
  set<Sexy::INetworkStatusListener*,std::less<Sexy::INetworkStatusListener*>,std::allocator<Sexy::INetworkStatusListener*>>
  ::~set((set<Sexy::INetworkStatusListener*,std::less<Sexy::INetworkStatusListener*>,std::allocator<Sexy::INetworkStatusListener*>>
          *)(this + 0x18));
  JavaBound<Sexy::AndroidHttpDriver>::~JavaBound((JavaBound<Sexy::AndroidHttpDriver> *)(this + 8));
  return;
}


/* non-virtual thunk to Sexy::AndroidHttpDriver::~AndroidHttpDriver() */

void __thiscall Sexy::AndroidHttpDriver::~AndroidHttpDriver(AndroidHttpDriver *this)

{
  ~AndroidHttpDriver(this + -8);
  return;
}


/* Sexy::AndroidHttpDriver::~AndroidHttpDriver() */

void __thiscall Sexy::AndroidHttpDriver::~AndroidHttpDriver(AndroidHttpDriver *this)

{
  ~AndroidHttpDriver(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Sexy::AndroidHttpDriver::~AndroidHttpDriver() */

void __thiscall Sexy::AndroidHttpDriver::~AndroidHttpDriver(AndroidHttpDriver *this)

{
  ~AndroidHttpDriver(this + -8);
  return;
}


/* Sexy::AndroidHttpDriver::AndroidHttpDriver() */

void __thiscall Sexy::AndroidHttpDriver::AndroidHttpDriver(AndroidHttpDriver *this)

{
  _JNIEnv *p_Var1;
  _jobject *p_Var2;
  
  IHttpDriver::IHttpDriver((IHttpDriver *)this);
  JavaBound<Sexy::AndroidHttpDriver>::JavaBound((JavaBound<Sexy::AndroidHttpDriver> *)(this + 8));
  *(undefined ***)this = &PTR__AndroidHttpDriver_06a34c40;
  *(undefined ***)(this + 8) = &PTR__AndroidHttpDriver_06a34c90;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0x18));
  *(undefined4 *)(this + 0x48) = 3;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x50));
  p_Var1 = (_JNIEnv *)Android::Util::GetJNIEnv();
  p_Var2 = (_jobject *)Android::Util::GetHttpObject(p_Var1);
  JavaBound<Sexy::AndroidHttpDriver>::AttachJava
            ((JavaBound<Sexy::AndroidHttpDriver> *)(this + 8),p_Var1,
             "com/popcap/SexyAppFramework/AndroidHttpProxy",p_Var2);
  GetNetworkStatus(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::AndroidHttpDriver::Update() */

void __thiscall Sexy::AndroidHttpDriver::Update(AndroidHttpDriver *this)

{
  bool bVar1;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::AndroidHttpTransaction*,std::allocator<Sexy::AndroidHttpTransaction*>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::AndroidHttpTransaction*,std::allocator<Sexy::AndroidHttpTransaction*>>::vector
            (avStack_20,(vector *)(this + 0x50));
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  while( true ) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    if (!bVar1) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    nop();
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<Sexy::AndroidHttpTransaction*,std::allocator<Sexy::AndroidHttpTransaction*>>::~vector
            (avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::AndroidHttpDriver::RemoveNetworkStatusListener(Sexy::INetworkStatusListener*) */

void Sexy::AndroidHttpDriver::RemoveNetworkStatusListener(INetworkStatusListener *param_1)

{
  std::
  set<Sexy::INetworkStatusListener*,std::less<Sexy::INetworkStatusListener*>,std::allocator<Sexy::INetworkStatusListener*>>
  ::erase((INetworkStatusListener **)(param_1 + 0x18));
  return;
}


/* Sexy::AndroidHttpDriver::AddNetworkStatusListener(Sexy::INetworkStatusListener*) */

void __thiscall
Sexy::AndroidHttpDriver::AddNetworkStatusListener
          (AndroidHttpDriver *this,INetworkStatusListener *param_1)

{
  INetworkStatusListener *local_8;
  
  local_8 = param_1;
  std::
  set<Sexy::INetworkStatusListener*,std::less<Sexy::INetworkStatusListener*>,std::allocator<Sexy::INetworkStatusListener*>>
  ::insert((set<Sexy::INetworkStatusListener*,std::less<Sexy::INetworkStatusListener*>,std::allocator<Sexy::INetworkStatusListener*>>
            *)(this + 0x18),&local_8);
  (**(code **)(*(long *)local_8 + 0x10))(local_8,*(undefined4 *)(this + 0x48));
  return;
}


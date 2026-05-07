// Class: Sexy::ResourceManager::GetImageOptions


/* Sexy::ResourceManager::GetImageOptions::GetImageOptions() */

void __thiscall Sexy::ResourceManager::GetImageOptions::GetImageOptions(GetImageOptions *this)

{
  this[1] = (GetImageOptions)0x1;
  *this = (GetImageOptions)0x0;
  this[2] = (GetImageOptions)0x0;
  this[3] = (GetImageOptions)0x0;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)(this + 8),(_func_void *)0x1);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  Set8BytesTo0(this + 0x20);
  return;
}


/* Sexy::ResourceManager::GetImageOptions::~GetImageOptions() */

void __thiscall Sexy::ResourceManager::GetImageOptions::~GetImageOptions(GetImageOptions *this)

{
  std::string::~string((string *)(this + 0x20));
  RtId::~RtId((RtId *)(this + 8));
  return;
}


/* Sexy::ResourceManager::GetImageOptions::TEMPNAMEPLACEHOLDERVALUE(Sexy::ResourceManager::GetImageOptions&&)
    */

GetImageOptions * __thiscall
Sexy::ResourceManager::GetImageOptions::operator=(GetImageOptions *this,GetImageOptions *param_1)

{
  undefined4 uVar1;
  GetImageOptions GVar2;
  GetImageOptions GVar3;
  GetImageOptions GVar4;
  undefined8 uVar5;
  
  GVar2 = *param_1;
  GVar3 = param_1[1];
  GVar4 = param_1[2];
  this[3] = param_1[3];
  *this = GVar2;
  this[1] = GVar3;
  this[2] = GVar4;
  RtId::operator=((RtId *)(this + 8),(RtId *)(param_1 + 8));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x18) = uVar1;
  FUN_05474278(this + 0x20,param_1 + 0x20);
  return this;
}


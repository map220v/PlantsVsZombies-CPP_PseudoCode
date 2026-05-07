// Class: RiftStatus


/* RiftStatus::~RiftStatus() */

void __thiscall RiftStatus::~RiftStatus(RiftStatus *this)

{
  *(undefined ***)this = &PTR__RiftStatus_0667eb60;
  std::string::~string((string *)(this + 0x10));
  Sexy::LazySingleton<RiftStatus>::~LazySingleton((LazySingleton<RiftStatus> *)this);
  return;
}


/* RiftStatus::~RiftStatus() */

void __thiscall RiftStatus::~RiftStatus(RiftStatus *this)

{
  ~RiftStatus(this);
  AK::FreeHook(this);
  return;
}


/* RiftStatus::RiftStatus() */

void __thiscall RiftStatus::RiftStatus(RiftStatus *this)

{
  size_t in_x2;
  
  Sexy::LazySingleton<RiftStatus>::LazySingleton((LazySingleton<RiftStatus> *)this);
  *(undefined ***)this = &PTR__RiftStatus_0667eb60;
  Set8BytesTo0((string *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::string::append((string *)(this + 0x10),"",in_x2);
  return;
}


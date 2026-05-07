// Class: SecretStoreBundle


/* SecretStoreBundle::SecretStoreBundle() */

void __thiscall SecretStoreBundle::SecretStoreBundle(SecretStoreBundle *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


/* SecretStoreBundle::~SecretStoreBundle() */

void __thiscall SecretStoreBundle::~SecretStoreBundle(SecretStoreBundle *this)

{
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::~vector
            ((vector<SecretStoreContent,std::allocator<SecretStoreContent>> *)(this + 0x10));
  return;
}


/* SecretStoreBundle::SecretStoreBundle(SecretStoreBundle const&) */

void __thiscall
SecretStoreBundle::SecretStoreBundle(SecretStoreBundle *this,SecretStoreBundle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  std::vector<SecretStoreContent,std::allocator<SecretStoreContent>>::vector
            ((vector<SecretStoreContent,std::allocator<SecretStoreContent>> *)(this + 0x10),
             (vector *)(param_1 + 0x10));
  return;
}


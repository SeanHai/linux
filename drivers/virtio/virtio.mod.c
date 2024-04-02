#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x91715312, "sprintf" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7c1372e8, "panic" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcca62a76, "device_add" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x551be51f, "device_initialize" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x32178f3f, "ida_destroy" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4625C9AF9657B792DEA6038");
MODULE_INFO(rhelversion, "8.0");

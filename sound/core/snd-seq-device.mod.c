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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x402b8281, "__request_module" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x110918bb, "snd_device_new" },
	{ 0x91018733, "device_del" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xcca62a76, "device_add" },
	{ 0xd831f284, "bus_unregister" },
	{ 0xb275a3a0, "bus_for_each_dev" },
	{ 0xd0c86c05, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x947e8457, "snd_seq_root" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x551be51f, "device_initialize" },
	{ 0x121da905, "queue_work_on" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xf84366d7, "snd_info_create_module_entry" },
	{ 0xdb02a8a3, "snd_info_register" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "4563576F5BC63C96D9EFBFF");
MODULE_INFO(rhelversion, "8.0");

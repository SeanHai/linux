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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47022514, "bt_err" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v0A5Cp2033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2934CD95FEEF02297AE5328");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x5a5bcae2, "uwb_est_unregister" },
	{ 0x27e1a049, "printk" },
	{ 0xf9e82859, "uwb_est_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v8086pDF3Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E005F1CC12FB28EA9FFDE11");
MODULE_INFO(rhelversion, "8.0");

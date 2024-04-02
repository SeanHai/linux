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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xefed9dd7, "input_unregister_polled_device" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x3ed5b2b6, "input_free_polled_device" },
	{ 0x3df9e726, "input_register_polled_device" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x1c504203, "input_allocate_polled_device" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf9a482f9, "msleep" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xfe7843b, "input_event" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";


MODULE_INFO(srcversion, "B8C280A440F26D230FC4F49");
MODULE_INFO(rhelversion, "8.0");

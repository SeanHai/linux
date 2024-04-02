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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0x187b257e, "platform_device_add_resources" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x1ac5d3cb, "strcspn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x28318305, "snprintf" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x91715312, "sprintf" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "014ACB3E75F5F6354BEEF50");
MODULE_INFO(rhelversion, "8.0");

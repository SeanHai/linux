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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xe9b41467, "param_ops_string" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x482bc218, "thermal_zone_device_register" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x7d4facf, "thermal_cooling_device_register" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xe1cf2bb, "thermal_zone_device_update" },
	{ 0xdb9fcc6e, "thermal_zone_bind_cooling_device" },
	{ 0x83b9f17a, "thermal_zone_unbind_cooling_device" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x3111f1ae, "thermal_zone_device_unregister" },
	{ 0x2ff3cc15, "thermal_cooling_device_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x5a921311, "strncmp" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76FFF4B8A74ED23B9F0CF5D");
MODULE_INFO(rhelversion, "8.0");

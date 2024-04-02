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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x27e1a049, "printk" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x4817185b, "i2c_setup_smbus_alert" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0xf9a482f9, "msleep" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit";


MODULE_INFO(srcversion, "CBE7D67981340B96BA32B66");
MODULE_INFO(rhelversion, "8.0");

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5cf3dd79, "mlxsw_core_bus_device_unregister" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfed76a65, "mlxsw_core_bus_device_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3fa74627, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core";


MODULE_INFO(srcversion, "DB95B8463F550C3EBB24252");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x28318305, "snprintf" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0x448eac3e, "kmemdup" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0403pC631d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C40p0534d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "12598AB9D990D907DFFAD7D");
MODULE_INFO(rhelversion, "8.0");

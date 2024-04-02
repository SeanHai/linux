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
	{ 0x402b8281, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ffd93d9, "dvb_usb_generic_write" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5a590fc3, "dvb_usb_device_exit" },
	{ 0x670815b8, "dvb_usb_device_init" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc0c3e64, "dvb_usb_generic_rw" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb";

MODULE_ALIAS("usb:v0547p0201d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "67F7A20878392DBB57C6ECB");
MODULE_INFO(rhelversion, "8.0");

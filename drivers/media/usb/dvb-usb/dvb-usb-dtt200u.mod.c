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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x4ffd93d9, "dvb_usb_generic_write" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5a590fc3, "dvb_usb_device_exit" },
	{ 0x670815b8, "dvb_usb_device_init" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6c7f12ee, "rc_keyup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xbc0c3e64, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xb9afc0f3, "rc_repeat" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,rc-core";

MODULE_ALIAS("usb:v14AAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0222d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18F3p0220d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0E4B9657B63F4EBE399C4DC");
MODULE_INFO(rhelversion, "8.0");

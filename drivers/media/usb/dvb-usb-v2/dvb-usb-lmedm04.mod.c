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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x89cca36d, "usb_reset_configuration" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xeb572c60, "dvb_usbv2_probe" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x2884c68b, "dvb_usbv2_disconnect" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,dvb_usb_v2,rc-core";

MODULE_ALIAS("usb:v3344p1122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p1120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3344p22F0d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B4CE6232EBE72421022E7BE");
MODULE_INFO(rhelversion, "8.0");

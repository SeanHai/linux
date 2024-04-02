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
	{ 0x7e6f662f, "dvb_usbv2_resume" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xeb572c60, "dvb_usbv2_probe" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x2884c68b, "dvb_usbv2_disconnect" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdc890f6b, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x562e270d, "dvb_usbv2_reset_resume" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2";

MODULE_ALIAS("usb:v058Fp6610d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "925968C038D68D9EE545CB2");
MODULE_INFO(rhelversion, "8.0");

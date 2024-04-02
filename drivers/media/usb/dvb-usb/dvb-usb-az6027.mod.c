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
	{ 0xf9a482f9, "msleep" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x5a590fc3, "dvb_usb_device_exit" },
	{ 0x670815b8, "dvb_usb_device_init" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x48c955ef, "stb0899_attach" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1efd719c, "stb6100_attach" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,stb0899,dvb-core,stb6100";

MODULE_ALIAS("usb:v13D3p3275d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0036d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2A9C1439AC00224A6C22644");
MODULE_INFO(rhelversion, "8.0");

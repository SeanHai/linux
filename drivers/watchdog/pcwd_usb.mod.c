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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x28cde093, "no_llseek" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x6bddef80, "misc_register" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x91715312, "sprintf" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27e1a049, "printk" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0C98p1140d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9EFA49334CC05E11A0105EE");
MODULE_INFO(rhelversion, "8.0");

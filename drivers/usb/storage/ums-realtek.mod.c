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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x6b185c62, "usb_stor_bulk_transfer_buf" },
	{ 0xc0b935d8, "usb_stor_post_reset" },
	{ 0xcfd4dde9, "usb_stor_control_msg" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x4c1d009, "usb_enable_autosuspend" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25fa992a, "usb_stor_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4892a57, "usb_autopm_put_interface_async" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb65c0ff, "usb_stor_probe2" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xd3b306fb, "usb_stor_host_template_init" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x54f9e0, "usb_stor_pre_reset" },
	{ 0x314f783a, "usb_stor_reset_resume" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d43bc0, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xfd499c29, "pm_runtime_set_autosuspend_delay" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C36200487561AEB8B8C0450");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xf0a16657, "FsmNew" },
	{ 0x4644eea5, "isdnhdlc_out_init" },
	{ 0x1fddb2c0, "usb_reset_endpoint" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x89cca36d, "usb_reset_configuration" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xdb17a95f, "FsmInitTimer" },
	{ 0x148f0c99, "FsmFree" },
	{ 0xfb578fc5, "memset" },
	{ 0xef4ee223, "isdnhdlc_encode" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x5b835a58, "isdnhdlc_rcv_init" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x93a64734, "FsmChangeState" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0x27c58fd5, "isdnhdlc_decode" },
	{ 0x37a0cba, "kfree" },
	{ 0xee93522c, "hisax_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe647e327, "FsmRestartTimer" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x7f4f2ce, "hisax_unregister" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0x2428061c, "usb_get_current_frame_number" },
	{ 0x9df0cd27, "FsmEvent" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x2ab78ca8, "FsmDelTimer" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax,isdnhdlc";

MODULE_ALIAS("usb:v0483p4810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4814d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4818d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4819d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "536049B5A283C41A1777BBD");
MODULE_INFO(rhelversion, "8.0");

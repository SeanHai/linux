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
	{ 0xfa5223cc, "del_timer" },
	{ 0x150b6997, "mwifiex_cancel_hs" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x8858cbe7, "mwifiex_write_data_complete" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x487e9521, "mwifiex_process_sleep_confirm_resp" },
	{ 0xaef4e0f9, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x98b8f0a5, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x38c84b56, "mwifiex_add_card" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x5def83f9, "skb_push" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x31bd9748, "mwifiex_alloc_dma_align_buf" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xf5074684, "mwifiex_process_hs_config" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x5ed33cf5, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0x140d2136, "mwifiex_fw_dump_event" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xcd828fc9, "mwifiex_deauthenticate_all" },
	{ 0xb37a8230, "mwifiex_remove_card" },
	{ 0xdf6cd3d2, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4b15b07a, "mwifiex_init_shutdown_fw" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "7C89C13C0C282E38DB61B86");
MODULE_INFO(rhelversion, "8.0");

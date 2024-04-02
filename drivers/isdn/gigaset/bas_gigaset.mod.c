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
	{ 0x2d3385d3, "system_wq" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xcf4fd979, "gigaset_isdn_rcv_err" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x94ddc4bd, "gigaset_shutdown" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0x4b271150, "gigaset_stop" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xa1cb916d, "gigaset_freedriver" },
	{ 0xfb578fc5, "memset" },
	{ 0xa3294ca4, "usb_lock_device_for_reset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x27e1a049, "printk" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdbf7900b, "gigaset_initdriver" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x55e5dd81, "usb_queue_reset_device" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x1c5d1717, "gigaset_blockdriver" },
	{ 0x4b8a88fc, "gigaset_initcs" },
	{ 0xe6478472, "_dev_info" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x2fc8b141, "usb_get_dev" },
	{ 0xafb76e7d, "gigaset_if_receive" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3b658c37, "usb_reset_device" },
	{ 0x871863c9, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1681100a, "usb_clear_halt" },
	{ 0xa011ee3c, "gigaset_handle_modem_response" },
	{ 0x61e27a0e, "gigaset_skb_sent" },
	{ 0xd3dcfb16, "gigaset_freecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9d589295, "gigaset_add_event" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4ae9b3cc, "gigaset_fill_inbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x71347225, "gigaset_skb_rcvd" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xa3151853, "gigaset_dbg_buffer" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xe5a06dd, "gigaset_start" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gigaset";

MODULE_ALIAS("usb:v0681p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p0022d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "65EA70F977418230C519179");
MODULE_INFO(rhelversion, "8.0");

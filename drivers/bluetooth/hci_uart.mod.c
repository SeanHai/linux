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
	{ 0xf9a482f9, "msleep" },
	{ 0x6b3a6c0f, "__hci_cmd_sync" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0x5f71b9ac, "hci_reset_dev" },
	{ 0xf424480c, "tty_unthrottle" },
	{ 0x42adace8, "__percpu_down_read" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x52f48f5e, "__percpu_init_rwsem" },
	{ 0x6525abf0, "tty_ldisc_flush" },
	{ 0x6bd461c1, "n_tty_ioctl_helper" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0x5def83f9, "skb_push" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x83d330c6, "percpu_up_write" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x4b31b51a, "tty_driver_flush_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x409b0a6f, "__percpu_up_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x121da905, "queue_work_on" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0x51526d35, "tty_register_ldisc" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x3ada4acd, "percpu_down_write" },
	{ 0x7bd3a740, "tty_set_termios" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "96922142E6665CE40A0600D");
MODULE_INFO(rhelversion, "8.0");

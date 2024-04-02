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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xbdc00a6d, "bpf_prog_create" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x5259ede5, "qdisc_reset" },
	{ 0xaf2fc3cd, "tty_port_close_end" },
	{ 0xae55feaa, "send_sig" },
	{ 0xb4e217a3, "tty_hung_up_p" },
	{ 0x28cde093, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5aee614e, "bpf_prog_destroy" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x52f8c71b, "tty_buffer_request_room" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x91715312, "sprintf" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x6525abf0, "tty_ldisc_flush" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0xe53f89ed, "tty_port_destroy" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7c935244, "tty_wait_until_sent" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x503af334, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x930541ad, "tty_port_install" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x373a2875, "tty_check_change" },
	{ 0xf6f82a1b, "eth_header_cache" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x509f625d, "consume_skb" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x684d881, "eth_header" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x30fe5ff1, "tty_port_block_til_ready" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "EFD717F83CEDEA99C76636E");
MODULE_INFO(rhelversion, "8.0");

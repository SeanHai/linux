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
	{ 0xa4d2fa7e, "tty_unregister_driver" },
	{ 0x357a3e43, "put_tty_driver" },
	{ 0xcf024620, "tty_register_driver" },
	{ 0x10bdb93e, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x79f6ea93, "__tty_alloc_driver" },
	{ 0x51526d35, "tty_register_ldisc" },
	{ 0x83128984, "tty_register_device" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x930541ad, "tty_port_install" },
	{ 0x534d1a41, "tty_unregister_device" },
	{ 0x6bd461c1, "n_tty_ioctl_helper" },
	{ 0xf7d6636f, "current_task" },
	{ 0x98004e1a, "tty_vhangup" },
	{ 0xdbddd4e2, "tty_port_lower_dtr_rts" },
	{ 0xaf2fc3cd, "tty_port_close_end" },
	{ 0x41f4f831, "tty_port_close_start" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x43ffe35e, "tty_insert_flip_string_fixed_flag" },
	{ 0x8a488198, "tty_flip_buffer_push" },
	{ 0xad7fee01, "tty_kref_put" },
	{ 0x6bc86cbe, "tty_wakeup" },
	{ 0x1c991abe, "tty_port_tty_get" },
	{ 0x5efe00e0, "tty_hangup" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x982191fd, "tty_port_put" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc2c81e79, "tty_port_init" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x579a308c, "skb_dequeue_tail" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe98cf630, "__tty_insert_flip_char" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x30fe5ff1, "tty_port_block_til_ready" },
	{ 0x60d9478a, "tty_port_tty_set" },
	{ 0xd9507c45, "tty_port_hangup" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x27e1a049, "printk" },
	{ 0x48882355, "tty_write_room" },
	{ 0xb4e217a3, "tty_hung_up_p" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xef013621, "tty_name" },
	{ 0xd9d43bf8, "tty_port_tty_hangup" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "38FB45FDA4E43B9D59A5164");
MODULE_INFO(rhelversion, "8.0");

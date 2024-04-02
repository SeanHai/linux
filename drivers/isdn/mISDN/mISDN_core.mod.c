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
	{ 0x317a8ad6, "flush_work" },
	{ 0x743ac344, "class_find_device" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x373ba864, "release_sock" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3114074c, "sock_init_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x28cde093, "no_llseek" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xe63246ae, "sock_no_getname" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x2dd63735, "sock_no_recvmsg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6bddef80, "misc_register" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x91018733, "device_del" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xa592a1a, "sk_free" },
	{ 0x318f7969, "add_timer" },
	{ 0xcca62a76, "device_add" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0x94fb0dcb, "class_for_each_device" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95685855, "datagram_poll" },
	{ 0xa80c15d5, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x6449786a, "put_cmsg" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0x5f20d53e, "device_rename" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xacef23f8, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x537b5209, "sock_no_sendmsg" },
	{ 0x551be51f, "device_initialize" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x509f625d, "consume_skb" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3f0ffbe, "skb_free_datagram" },
	{ 0x6c07d933, "add_uevent_var" },
	{ 0x2f548802, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0A5379ACA796AF1B6389E62");
MODULE_INFO(rhelversion, "8.0");

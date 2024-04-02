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
	{ 0x373ba864, "release_sock" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x407482f9, "can_rx_register" },
	{ 0x563e4e5e, "hrtimer_active" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xd54466fb, "can_proto_unregister" },
	{ 0xee7bb8d8, "proc_create_net_single" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe63246ae, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0x91715312, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xaaedeaed, "PDE_DATA" },
	{ 0xce2254bd, "sock_efree" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x6edf4a5a, "proc_mkdir_data" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xf13b1dfb, "dev_get_by_index_rcu" },
	{ 0xa592a1a, "sk_free" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6068eb41, "can_ioctl" },
	{ 0xadc31089, "can_send" },
	{ 0xf88aafa7, "__sock_recv_ts_and_drops" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95685855, "datagram_poll" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf767afc8, "can_proto_register" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x22805e47, "can_rx_unregister" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3f0ffbe, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "10E55C7579B466FD7ADA931");
MODULE_INFO(rhelversion, "8.0");

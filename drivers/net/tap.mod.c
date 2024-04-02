#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x4c89f920, "cdev_del" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x3114074c, "sock_init_data" },
	{ 0x6a8db397, "cdev_init" },
	{ 0x4386d86, "iov_iter_npages" },
	{ 0x77e23d0, "__skb_gso_segment" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xca657c48, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x3ae9232c, "__skb_flow_dissect" },
	{ 0xd09d6a1c, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x28cde093, "no_llseek" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6af42e10, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x3c6b2bc3, "skb_partial_csum_set" },
	{ 0x9e80addf, "kfree_skb_list" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xce7d32b3, "dev_set_mac_address" },
	{ 0x701843ca, "idr_destroy" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5def83f9, "skb_push" },
	{ 0xa592a1a, "sk_free" },
	{ 0x787b953, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x183a470e, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xe5e29cae, "cdev_add" },
	{ 0xc5bc25de, "kvmalloc_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9644e087, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xdbdd81da, "iov_iter_advance" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x509f625d, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0xe041aa4e, "zerocopy_sg_from_iter" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76FCDF280BB9FA1E82FB700");
MODULE_INFO(rhelversion, "8.0");

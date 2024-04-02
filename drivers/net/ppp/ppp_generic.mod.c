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
	{ 0xa4a02131, "register_netdevice" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xbca18818, "skb_queue_head" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0xea2b701b, "up_read" },
	{ 0xbdc00a6d, "bpf_prog_create" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x5e87e75, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x581fae3c, "__register_chrdev" },
	{ 0x5aee614e, "bpf_prog_destroy" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xe7486c43, "__put_net" },
	{ 0xb3f2bc64, "skb_scrub_packet" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x91185511, "down_read" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf7d6636f, "current_task" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3dc1e6f6, "netdev_printk" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x2df52479, "device_create" },
	{ 0x787b953, "idr_alloc" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x50d83074, "fput" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd11a8c36, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x302ee579, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x81c1dbf4, "fget" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xa047947, "class_destroy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x28318305, "snprintf" },
	{ 0x509f625d, "consume_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdf30c245, "idr_find" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xce2ba1bd, "__class_create" },
	{ 0x6405dcd3, "slhc_toss" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=slhc";


MODULE_INFO(srcversion, "3CA16CF72725E24C11D7526");
MODULE_INFO(rhelversion, "8.0");

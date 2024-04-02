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
	{ 0x373ba864, "release_sock" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x56837fb, "vmci_get_context_id" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xe11895c1, "vmci_event_unsubscribe" },
	{ 0x17bcfed7, "__vsock_create" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x66bc0019, "vmci_qpair_enquev" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xa502d958, "vsock_add_pending" },
	{ 0x77c7b3ef, "vmci_qpair_dequev" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0x612df9ae, "vmci_qpair_detach" },
	{ 0x85f15121, "__vsock_core_init" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x27e5ea64, "vsock_stream_has_space" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x858ce318, "vsock_find_connected_socket" },
	{ 0xe0cc9c92, "vmci_qpair_alloc" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0xef749ca, "vsock_stream_has_data" },
	{ 0x27e1a049, "printk" },
	{ 0x46dd187, "vmci_datagram_create_handle" },
	{ 0xc403cafe, "vmci_is_context_owner" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x38356a, "vmci_qpair_peekv" },
	{ 0x676bd843, "vmci_qpair_consume_free_space" },
	{ 0x2663cb64, "vsock_addr_equals_addr" },
	{ 0xa592a1a, "sk_free" },
	{ 0xc04c7e84, "vmci_qpair_get_consume_indexes" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x14a3b35e, "__sk_receive_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbd0f699d, "vsock_addr_bound" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x4e5ed59e, "vsock_remove_pending" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x24d14bc, "vmci_qpair_produce_free_space" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0xea01893d, "vsock_find_bound_socket" },
	{ 0x44bb8cca, "vsock_remove_connected" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xea143610, "vmci_datagram_send" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2449459d, "vmci_event_subscribe" },
	{ 0x37a0cba, "kfree" },
	{ 0xea61eefe, "vmci_qpair_produce_buf_ready" },
	{ 0x69acdf38, "memcpy" },
	{ 0x32fb2404, "vsock_remove_sock" },
	{ 0x3a22fa8a, "vmci_datagram_destroy_handle" },
	{ 0x121da905, "queue_work_on" },
	{ 0x4f2c6724, "vsock_for_each_connected_socket" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7c74d7a6, "vmci_qpair_consume_buf_ready" },
	{ 0x1fd4782d, "vmci_qpair_get_produce_indexes" },
	{ 0x100155fe, "vsock_insert_connected" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5591b58e, "vmci_context_get_priv_flags" },
	{ 0xde3abc2e, "vmci_datagram_create_handle_priv" },
	{ 0x3f0ffbe, "skb_free_datagram" },
	{ 0xf47fbc30, "vsock_enqueue_accept" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vmci,vsock";


MODULE_INFO(srcversion, "776CFB61811A9C9E24540C5");
MODULE_INFO(rhelversion, "8.0");

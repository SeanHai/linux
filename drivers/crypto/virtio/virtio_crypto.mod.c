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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xbb4a40ae, "crypto_unregister_algs" },
	{ 0x87fe552d, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x13bb598b, "crypto_engine_alloc_init" },
	{ 0x87b8798d, "sg_next" },
	{ 0x177847e, "cpu_info" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1ed1ab31, "virtio_break_device" },
	{ 0x67686d8e, "virtqueue_add_sgs" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x81591fd8, "crypto_engine_start" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x280160b5, "virtqueue_disable_cb" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xa7ae63df, "crypto_finalize_ablkcipher_request" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf51e4e64, "crypto_transfer_ablkcipher_request_to_engine" },
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf99d347e, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xe15a4841, "crypto_engine_exit" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a793073, "crypto_register_algs" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x55f5019b, "__kmalloc_node" },
	{ 0x28318305, "snprintf" },
	{ 0xc811a6dd, "virtqueue_is_broken" },
	{ 0x5eda95a0, "virtqueue_detach_unused_buf" },
	{ 0xc244b1aa, "virtqueue_enable_cb" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xff5d0490, "register_virtio_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crypto_engine,virtio_ring,virtio";

MODULE_ALIAS("virtio:d00000014v*");

MODULE_INFO(srcversion, "B9DBACE8D6098BE73D779EE");
MODULE_INFO(rhelversion, "8.0");

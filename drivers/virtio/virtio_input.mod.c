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
	{ 0xaa24938c, "unregister_virtio_driver" },
	{ 0xff5d0490, "register_virtio_driver" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xf789deff, "input_register_device" },
	{ 0x5494c2, "input_alloc_absinfo" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x28318305, "snprintf" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x4d91d37c, "virtqueue_add_outbuf" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1b9f706b, "virtqueue_get_vring_size" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0xfe7843b, "input_event" },
	{ 0xf6cbc819, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x5eda95a0, "virtqueue_detach_unused_buf" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000012v*");

MODULE_INFO(srcversion, "9FE32E03EA4C65700ABA2AB");
MODULE_INFO(rhelversion, "8.0");

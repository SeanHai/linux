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
	{ 0x91715312, "sprintf" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x44d8b339, "virtqueue_kick" },
	{ 0xf6cbc819, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa096b889, "wait_for_completion_killable" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x29361773, "complete" },
	{ 0x3ff0c46a, "virtqueue_get_buf" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000004v*");

MODULE_INFO(srcversion, "C6821044C563F37F67BE322");
MODULE_INFO(rhelversion, "8.0");
